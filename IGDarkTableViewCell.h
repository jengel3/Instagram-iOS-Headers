
#import <Instagram/IGPlainTableViewCell.h>

@interface IGDarkTableViewCell : IGPlainTableViewCell {

	char _checked;

}

@property (assign,nonatomic) char checked;              //@synthesize checked=_checked - In the implementation block
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(char)arg1 ;
-(char)checked;
@end

