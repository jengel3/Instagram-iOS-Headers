

@protocol IGDirectPendingInboxControllerType <IGUIPerfLoggable>
@property (assign,nonatomic,__weak) id<IGDirectPendingInboxDelegate> delegate; 
@property (assign,nonatomic) int totalPending; 
@required
-(int)totalPending;
-(void)setTotalPending:(int)arg1;
-(void)setDelegate:(id)arg1;
-(id<IGDirectPendingInboxDelegate>)delegate;

@end

