
#import <Instagram/IGPlainTableViewCell.h>

@class UILabel;

@interface IGUserListViewCountCell : IGPlainTableViewCell {

	UILabel* _viewCountLabel;

}

@property (nonatomic,readonly) UILabel * viewCountLabel;              //@synthesize viewCountLabel=_viewCountLabel - In the implementation block
+(float)cellHeight;
-(UILabel *)viewCountLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
@end

