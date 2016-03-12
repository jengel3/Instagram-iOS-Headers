
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface IGRelatedItemCollectionViewCell : UICollectionViewCell {

	UILabel* _textLabel;

}

@property (nonatomic,__weak,readonly) UILabel * textLabel;              //@synthesize textLabel=_textLabel - In the implementation block
+(id)cellIdentifier;
-(void)configureWithRelatedItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
@end

