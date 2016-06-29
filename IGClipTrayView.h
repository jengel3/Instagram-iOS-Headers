
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UICollectionView, UILabel;

@interface IGClipTrayView : UIView {

	UICollectionView* _collectionView;
	UILabel* _instructionLabel;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UILabel * instructionLabel;                     //@synthesize instructionLabel=_instructionLabel - In the implementation block
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(UILabel *)instructionLabel;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

