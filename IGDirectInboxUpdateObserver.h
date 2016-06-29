

@interface IGDirectInboxUpdateObserver : NSObject {

	/*^block*/id _handler;

}

@property (nonatomic,copy,readonly) id handler;              //@synthesize handler=_handler - In the implementation block
-(void)didReceiveInboxUpdateNotification:(id)arg1 ;
-(void)didReceiveThreadUpdateNotification:(id)arg1 ;
-(void)dealloc;
-(id)handler;
-(id)initWithHandler:(/*^block*/id)arg1 ;
@end

