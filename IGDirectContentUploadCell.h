
@class IGDirectContentCellUploadDecorator;


@protocol IGDirectContentUploadCell
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate; 
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator; 
@required
-(IGDirectContentCellUploadDecorator *)uploadDecorator;
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)performDelete;
-(void)uploadDecoratorShowFailedUI:(id)arg1;
-(void)showUploadFailedUI;
-(void)showUploadSendingUI;
-(void)setUploadDecorator:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<IGDirectContentUpoadCellDelegate>)delegate;

@end

