

@protocol IGFilterTintControlDelegate <NSObject>
@required
-(void)tintControl:(id)arg1 tintColorDidChange:(unsigned)arg2 tintType:(unsigned)arg3;
-(void)tintControl:(id)arg1 tintIntensityDidChange:(float)arg2 tintType:(unsigned)arg3;

@end

