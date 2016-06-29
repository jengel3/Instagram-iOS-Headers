

@protocol IGVideoTrimViewDelegate <NSObject>
@required
-(void)trimViewWillBeginUpdatingTrimmedRange:(id)arg1;
-(void)trimView:(id)arg1 didUpdateTrimmedRange:(IGRange)arg2;
-(void)trimViewDidEndUpdatingTrimmedRange:(id)arg1;

@end

