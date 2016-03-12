
#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface IGGenericMegaphoneCell : UICollectionViewCell {

	UIView* _megaphoneView;

}

@property (nonatomic,retain) UIView * megaphoneView;              //@synthesize megaphoneView=_megaphoneView - In the implementation block
-(void)setMegaphoneView:(UIView *)arg1 ;
-(UIView *)megaphoneView;
-(void)layoutSubviews;
@end

