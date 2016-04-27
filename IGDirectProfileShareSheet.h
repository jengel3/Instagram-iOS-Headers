
#import <Instagram/IGDirectShareSheet.h>

@class IGUser;

@interface IGDirectProfileShareSheet : IGDirectShareSheet {

	IGUser* _sharedUser;

}

@property (nonatomic,retain) IGUser * sharedUser;              //@synthesize sharedUser=_sharedUser - In the implementation block
-(IGUser *)sharedUser;
-(void)uploadCurrentContentToRecipient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setSharedUser:(IGUser *)arg1 ;
@end

