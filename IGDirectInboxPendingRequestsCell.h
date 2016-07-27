
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIImageView;

@interface IGDirectInboxPendingRequestsCell : UICollectionViewCell {

	UILabel* _label;
	UIImageView* _chevron;

}

@property (nonatomic,readonly) UILabel * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * chevron;              //@synthesize chevron=_chevron - In the implementation block
-(void)setupLabel;
-(void)setupChevron;
-(void)configureWithViewModel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
-(UIImageView *)chevron;
-(void)setupSubviews;
@end

