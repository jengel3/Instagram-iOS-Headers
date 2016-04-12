
@class IGDirectContentCellUploadDecorator;


@protocol IGDirectContentUploadCell
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate; 
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator; 
@required
-(IGDirectContentCellUploadDecorator *)uploadDecorator;
-(void)setUploadDecorator:(id)arg1;
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)performDelete;
-(void)showUploadFailedUI;
-(void)showUploadSendingUI;
-(void)setDelegate:(id)arg1;
-(id<IGDirectContentUpoadCellDelegate>)delegate;

@end

