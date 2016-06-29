
@class UIView;


@protocol IGCommentTextViewWithReshareProtocol <IGCommentTextViewProtocol>
@property (nonatomic,readonly) UIView * topLine; 
@required
-(void)updateUIForStatus:(int)arg1;
-(void)addModeSwitchButtonTappedTarget:(id)arg1 action:(SEL)arg2;
-(float)modeSwitchButtonCenterX;
-(UIView *)topLine;

@end

