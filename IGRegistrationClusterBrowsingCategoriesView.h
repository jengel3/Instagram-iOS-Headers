
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGClusterBrowsingCategoriesScrollView, IGRegistrationBackgroundView;

@interface IGRegistrationClusterBrowsingCategoriesView : UIView {

	IGClusterBrowsingCategoriesScrollView* _categoriesScrollView;
	IGRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGClusterBrowsingCategoriesScrollView * categoriesScrollView;              //@synthesize categoriesScrollView=_categoriesScrollView - In the implementation block
@property (nonatomic,retain) IGRegistrationBackgroundView * backgroundView;                             //@synthesize backgroundView=_backgroundView - In the implementation block
-(IGClusterBrowsingCategoriesScrollView *)categoriesScrollView;
-(void)setCategoriesScrollView:(IGClusterBrowsingCategoriesScrollView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(IGRegistrationBackgroundView *)arg1 ;
-(IGRegistrationBackgroundView *)backgroundView;
@end

