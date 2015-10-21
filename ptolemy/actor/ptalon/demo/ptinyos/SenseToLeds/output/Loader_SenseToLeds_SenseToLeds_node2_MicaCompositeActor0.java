import java.net.ServerSocket;
import java.nio.channels.Selector;
import java.nio.channels.SelectableChannel;
import java.nio.channels.SocketChannel;
import ptolemy.domains.ptinyos.kernel.PtinyOSLoader;
import ptolemy.domains.ptinyos.kernel.PtinyOSDirector;
import ptolemy.kernel.util.InternalErrorException;
import ptolemy.util.MessageHandler;
public class Loader_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0 implements PtinyOSLoader {
    public void load(String path, PtinyOSDirector director) {
        String fileSeparator = System.getProperty("file.separator");
        String toBeLoaded = path + fileSeparator + System.mapLibraryName("_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0");
        toBeLoaded = toBeLoaded.replace('\\', '/');
        System.out.println("_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0.java : about to load " + toBeLoaded);
        System.load(toBeLoaded);
        this.director = director;
    }
    public int main(String argsToMain[]) throws InternalErrorException {
        return main_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0(argsToMain);
    }
    public void startThreads() {
        try {
        this.eventAcceptThread = new EventAcceptThread();
        this.eventAcceptThread.start();
        this.commandReadThread = new CommandReadThread();
        this.commandReadThread.start();
        } catch (Exception ex) {
            MessageHandler.error("Could not join thread.", ex);
        }
    }
    public boolean joinThreads() {
        try {
            if (this.commandReadThread != null) {
                this.commandReadThread.join();
            }
            if (this.eventAcceptThread != null) {
                this.eventAcceptThread.join();
            }
            return true;
        } catch (Exception ex) {
            MessageHandler.error("Could not join thread.", ex);
        }
        return false;
    }
    public void wrapup() {
        wrapup_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0();
    }
    public void processEvent(long currentTime) {
        processEvent_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0(currentTime);
    }
    public void receivePacket(long currentTime, String packet) {
        receivePacket_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0(currentTime, packet);
    }
    public void enqueueEvent(String newTime) {
        this.director.enqueueEvent(newTime);
    }
    public char getCharParameterValue(String param) {
        return this.director.getCharParameterValue(param);
    }
    public boolean sendToPort(String portName, String expression) {
        return this.director.sendToPort(portName, expression);
    }
    public void tosDebug(String debugMode, String message, String nodeID) {
        this.director.tosDebug(debugMode, message, nodeID);
    }
    public ServerSocket serverSocketCreate(short port) {
        return this.director.serverSocketCreate(port);
    }
    public void serverSocketClose(ServerSocket serverSocket) {
        this.director.serverSocketClose(serverSocket);
    }
    public Selector selectorCreate(ServerSocket serverSocket, boolean opAccept, boolean opConnect, boolean opRead, boolean opWrite) {
        return this.director.selectorCreate(serverSocket, opAccept, opConnect, opRead, opWrite);
    }
    public void selectorRegister(Selector selector, SelectableChannel SocketChannel, boolean opAccept, boolean opConnect, boolean opRead, boolean opWrite) {
        this.director.selectorRegister(selector, SocketChannel, opAccept, opConnect, opRead, opWrite);
    }
    public void selectorClose(Selector selector) {
        this.director.selectorClose(selector);
    }
    public SelectableChannel selectSocket(Selector selector, boolean[] notNullIfClosing, boolean opAccept, boolean opConnect, boolean opRead, boolean opWrite) {
        return this.director.selectSocket(selector, notNullIfClosing, opAccept, opConnect, opRead, opWrite);
    }
    public SocketChannel acceptConnection(SelectableChannel serverSocketChannel) {
        return this.director.acceptConnection(serverSocketChannel);
    }
    public void socketChannelClose(SelectableChannel socketChannel) {
        this.director.socketChannelClose(socketChannel);
    }
    public int socketChannelWrite(SocketChannel socketChannel, byte[] writeBuffer) {
        return this.director.socketChannelWrite(socketChannel, writeBuffer);
    }
    public int socketChannelRead(SocketChannel socketChannel, byte[] readBuffer) {
        return this.director.socketChannelRead(socketChannel, readBuffer);
    }
    private PtinyOSDirector director;
    private native int main_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0(String argsToMain[]) throws InternalErrorException;
    private native void commandReadThread_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0();
    private native void eventAcceptThread_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0();
    private native void wrapup_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0();
    private native void processEvent_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0(long currentTime);
    private native void receivePacket_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0(long currentTime, String packet);
    private CommandReadThread commandReadThread;
    private EventAcceptThread eventAcceptThread;
    class CommandReadThread extends Thread {
         public void run() {
             commandReadThread_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0();
         }
    }
    class EventAcceptThread extends Thread {
         public void run() {
             eventAcceptThread_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0();
         }
    }
}
