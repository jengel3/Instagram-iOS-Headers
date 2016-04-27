
@class UIView;


@protocol IGCommentTextViewWithReshareProtocol <IGCommentTextViewProtocol>
@property (nonatomic,readonly) UIView * topLine; 
@required
-(UIView *)topLine;
-(float)modeSwitchButtonCenterX;
-(void)updateUIForStatus:(int)arg1;
-(void)addModeSwitchButtonTappedTarget:(id)arg1 action:(SEL)arg2;

@end

