

@protocol IGClipCollectionControllerDelegate <NSObject>
@required
-(id)cachedThumbnailForClip:(id)arg1 andTime:(SCD_Struct_IG52)arg2;
-(void)clipController:(id)arg1 didChangeClipOrder:(id)arg2;
-(void)didTapClipAtIndexPath:(id)arg1;
-(void)clipControllerDidStartReordering:(id)arg1;
-(void)clipControllerDidFinishReordering:(id)arg1;
-(id)draggingContainerViewForClipController:(id)arg1;

@end

