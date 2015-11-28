
#import <Instagram/IGDirectShareViewController.h>

@class IGHashtagModel;

@interface IGDirectHashtagShareViewController : IGDirectShareViewController {

	IGHashtagModel* _hashtag;

}

@property (nonatomic,retain) IGHashtagModel * hashtag;              //@synthesize hashtag=_hashtag - In the implementation block
-(IGHashtagModel *)hashtag;
-(void)uploadCurrentContentToRecipient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setHashtag:(IGHashtagModel *)arg1 ;
@end

