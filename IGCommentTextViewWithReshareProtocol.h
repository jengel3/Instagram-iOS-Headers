
@class UIView;


@protocol IGCommentTextViewWithReshareProtocol <IGCommentTextViewProtocol>
@property (nonatomic,readonly) UIView * topLine; 
@required
-(float)modeSwitchButtonCenterX;
-(void)addModeSwitchButtonTappedTarget:(id)arg1 action:(SEL)arg2;
-(void)updateUIForStatus:(int)arg1;
-(UIView *)topLine;

@end

