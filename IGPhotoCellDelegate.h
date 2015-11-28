

@protocol IGPhotoCellDelegate <NSObject>
@required
-(void)photoCellDidInitialSingleTap:(id)arg1;
-(void)photoCellDidDoubleTapToLike:(id)arg1;
-(void)photoCellImageDidLoadImage:(id)arg1;
-(void)photoCellDidSingleTap:(id)arg1 continueAction:(char)arg2;

@end

