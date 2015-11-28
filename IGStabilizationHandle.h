

@interface IGStabilizationHandle : NSObject {

	BOOL _cancelled;

}
-(BOOL*)rawCancelHandle;
-(void)cancel;
-(char)isCancelled;
@end

