
#import <Instagram/IGPlainTableViewCell.h>

@class UILabel;

@interface IGUserListLikeCountCell : IGPlainTableViewCell {

	UILabel* _likeCountLabel;

}

@property (nonatomic,readonly) UILabel * likeCountLabel;              //@synthesize likeCountLabel=_likeCountLabel - In the implementation block
+(float)cellHeight;
-(UILabel *)likeCountLabel;
-(void)setLikesString:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

