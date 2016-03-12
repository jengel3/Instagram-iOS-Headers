
#import <Instagram/IGPlainTableViewCell.h>

@class UILabel;

@interface IGUserBioInfoCell : IGPlainTableViewCell {

	UILabel* _bioInfoLabel;

}

@property (nonatomic,retain) UILabel * bioInfoLabel;              //@synthesize bioInfoLabel=_bioInfoLabel - In the implementation block
+(id)styledStringForFullName:(id)arg1 bioInfo:(id)arg2 forPK:(id)arg3 withWidth:(float)arg4 ;
+(id)validateString:(id)arg1 ;
-(float)setUserFullName:(id)arg1 bioInfo:(id)arg2 forPK:(id)arg3 withWidth:(float)arg4 ;
-(UILabel *)bioInfoLabel;
-(void)setBioInfoLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

