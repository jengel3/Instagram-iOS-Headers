
@class UIButton;


@protocol IGUFIButtonBarViewProtocol <NSObject>
@property (assign,nonatomic,__weak) id<IGUFIButtonBarViewDelegate> delegate; 
@property (nonatomic,readonly) UIButton * sendButton; 
@required
-(void)adjustViewWithConstraintSize:(CGSize)arg1;
-(void)updateUFIButtonWithFeedItem:(id)arg1 showCommentButton:(char)arg2 showSendButton:(char)arg3 animated:(char)arg4;
-(void)setDelegate:(id)arg1;
-(id<IGUFIButtonBarViewDelegate>)delegate;
-(UIButton *)sendButton;

@end

