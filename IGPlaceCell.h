
#import <Instagram/IGPlainTableViewCell.h>

@class IGLocation;

@interface IGPlaceCell : IGPlainTableViewCell {

	IGLocation* _location;

}

@property (nonatomic,retain) IGLocation * location;              //@synthesize location=_location - In the implementation block
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
@end

