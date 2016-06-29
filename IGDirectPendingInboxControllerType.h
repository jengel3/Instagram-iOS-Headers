

@protocol IGDirectPendingInboxControllerType <IGUIPerfLoggable>
@property (assign,nonatomic,__weak) id<IGDirectPendingInboxDelegate> delegate; 
@property (assign,nonatomic) int totalPending; 
@required
-(void)setTotalPending:(int)arg1;
-(int)totalPending;
-(void)setDelegate:(id)arg1;
-(id<IGDirectPendingInboxDelegate>)delegate;

@end

