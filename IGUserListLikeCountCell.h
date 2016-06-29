
#import <Instagram/IGPlainTableViewCell.h>

@class NSString, UILabel;

@interface IGUserListLikeCountCell : IGPlainTableViewCell {

	NSString* _likesString;
	UILabel* _likeCountLabel;

}

@property (nonatomic,readonly) UILabel * likeCountLabel;              //@synthesize likeCountLabel=_likeCountLabel - In the implementation block
@property (nonatomic,retain) NSString * likesString;                  //@synthesize likesString=_likesString - In the implementation block
+(float)cellHeight;
-(UILabel *)likeCountLabel;
-(void)setLikesString:(NSString *)arg1 ;
-(NSString *)likesString;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

