
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGUFIButtonBarViewProtocol;
@class UIView;

@interface IGEventViewerActionCell : UICollectionViewCell {

	UIView*<IGUFIButtonBarViewProtocol> _ufiButtons;
	int* _ufiStyle;

}

@property (nonatomic,readonly) int* ufiStyle;                                               //@synthesize ufiStyle=_ufiStyle - In the implementation block
@property (nonatomic,readonly) UIView*<IGUFIButtonBarViewProtocol> ufiButtons;              //@synthesize ufiButtons=_ufiButtons - In the implementation block
+(id)cellIdentifier;
-(void)setUpUFIButtons;
-(int*)ufiStyle;
-(UIView*<IGUFIButtonBarViewProtocol>)ufiButtons;
-(void)configureWithFeedItem:(id)arg1 ufiButtonsDelegate:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

