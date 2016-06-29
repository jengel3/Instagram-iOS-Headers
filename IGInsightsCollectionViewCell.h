
#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface IGInsightsCollectionViewCell : UICollectionViewCell {

	UIView* _currentMainView;

}

@property (nonatomic,retain) UIView * currentMainView;              //@synthesize currentMainView=_currentMainView - In the implementation block
-(UIView *)currentMainView;
-(void)setCurrentMainView:(UIView *)arg1 ;
-(void)setMainView:(id)arg1 ;
-(void)layoutSubviews;
@end

