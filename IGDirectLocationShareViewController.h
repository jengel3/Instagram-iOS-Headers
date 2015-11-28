
#import <Instagram/IGDirectShareViewController.h>

@class IGLocation;

@interface IGDirectLocationShareViewController : IGDirectShareViewController {

	IGLocation* _location;

}

@property (nonatomic,retain) IGLocation * location;              //@synthesize location=_location - In the implementation block
-(void)uploadCurrentContentToRecipient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
@end

