

@protocol IGCollectionViewLayoutAdditions <NSObject>
@property (assign,nonatomic) float supplementaryHeaderViewHeight; 
@property (assign,nonatomic) float supplementaryFooterViewHeight; 
@property (assign,nonatomic) float headerAdjustmentAmount; 
@required
-(void)setSupplementaryHeaderViewHeight:(float)arg1;
-(void)setSupplementaryFooterViewHeight:(float)arg1;
-(float)supplementaryHeaderViewHeight;
-(float)supplementaryFooterViewHeight;
-(float)headerAdjustmentAmount;
-(void)setHeaderAdjustmentAmount:(float)arg1;

@end

