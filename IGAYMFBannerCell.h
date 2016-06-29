
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGBannerView;

@interface IGAYMFBannerCell : UICollectionViewCell {

	IGBannerView* _bannerView;

}

@property (nonatomic,readonly) IGBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
-(IGBannerView *)bannerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

