

@protocol IGCollectionViewLayoutAdditions <NSObject>
@property (assign,nonatomic) float supplementaryHeaderViewHeight; 
@property (assign,nonatomic) float supplementaryFooterViewHeight; 
@property (assign,nonatomic) float headerAdjustmentAmount; 
@required
-(float)headerAdjustmentAmount;
-(float)supplementaryHeaderViewHeight;
-(void)setSupplementaryHeaderViewHeight:(float)arg1;
-(float)supplementaryFooterViewHeight;
-(void)setSupplementaryFooterViewHeight:(float)arg1;
-(void)setHeaderAdjustmentAmount:(float)arg1;

@end

