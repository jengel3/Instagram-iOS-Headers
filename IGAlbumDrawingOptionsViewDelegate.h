

@protocol IGAlbumDrawingOptionsViewDelegate <NSObject>
@required
-(void)drawingOptionsViewWillBeginSelectingBrushWidth:(id)arg1;
-(void)drawingOptionsView:(id)arg1 didSelectBrushWidth:(float)arg2;
-(void)drawingOptionsView:(id)arg1 didSelectColor:(id)arg2;

@end

