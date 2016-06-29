
@class UIButton;


@protocol IGUFIButtonBarViewProtocol <NSObject>
@property (assign,nonatomic,__weak) id<IGUFIButtonBarViewDelegate> delegate; 
@property (nonatomic,readonly) UIButton * sendButton; 
@required
-(void)adjustViewWithConstraintSize:(CGSize)arg1;
-(void)updateUFIButtonWithFeedItem:(id)arg1 animated:(char)arg2;
-(void)setSendButtonHidden:(char)arg1;
-(void)setCommentButtonHidden:(char)arg1;
-(void)setDelegate:(id)arg1;
-(id<IGUFIButtonBarViewDelegate>)delegate;
-(UIButton *)sendButton;

@end

