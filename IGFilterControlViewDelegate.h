

@protocol IGFilterControlViewDelegate <NSObject>
@required
-(void)filterControlViewDidTapRotate:(id)arg1;
-(void)filterControlView:(id)arg1 didChangeValue:(float)arg2;
-(void)filterControlViewDidStartDragging:(id)arg1;
-(void)filterControlViewDidEndDragging:(id)arg1;
-(void)filterControlViewDidToggleGrid:(char)arg1;
-(void)filterControlViewDidPressDone:(id)arg1;
-(void)filterControlViewDidPressCancel:(id)arg1;
-(void)filterControlView:(id)arg1 didChangeBorderSelection:(char)arg2;
-(void)filterControlViewNeedUpdateValue;
-(void)filterControlView:(id)arg1 didChangeTintColor:(unsigned)arg2 withTintType:(unsigned)arg3;
-(void)filterControlView:(id)arg1 didChangetintIntensity:(float)arg2 tintType:(unsigned)arg3;

@end

