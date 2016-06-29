

@protocol TProtocolFactory, TProcessorFactory;
@class NSFileHandle;

@interface TSocketServer : NSObject {

	NSFileHandle* mSocketFileHandle;
	id<TProtocolFactory> mInputProtocolFactory;
	id<TProtocolFactory> mOutputProtocolFactory;
	id<TProcessorFactory> mProcessorFactory;

}
-(void)connectionAccepted:(id)arg1 ;
-(id)initWithPort:(int)arg1 protocolFactory:(id)arg2 processorFactory:(id)arg3 ;
-(void)dealloc;
-(void)handleClientConnection:(id)arg1 ;
@end

