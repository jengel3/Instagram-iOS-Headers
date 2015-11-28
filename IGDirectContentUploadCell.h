

@protocol IGDirectContentUploadCell
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate; 
@required
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)performDelete;
-(void)setDelegate:(id)arg1;
-(id<IGDirectContentUpoadCellDelegate>)delegate;

@end

