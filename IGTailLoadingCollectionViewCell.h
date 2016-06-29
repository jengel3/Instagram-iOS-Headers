
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIActivityIndicatorView;

@interface IGTailLoadingCollectionViewCell : UICollectionViewCell {

	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,readonly) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
+(float)preferredHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)spinner;
@end

