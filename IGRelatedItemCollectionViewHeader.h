
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface IGRelatedItemCollectionViewHeader : UICollectionReusableView {

	UILabel* _textLabel;

}

@property (nonatomic,__weak,readonly) UILabel * textLabel;              //@synthesize textLabel=_textLabel - In the implementation block
+(id)headerIdentifier;
-(void)configureWithTitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
@end

