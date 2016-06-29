
#import <Instagram/IGDirectShareSheet.h>

@class IGHashtagModel;

@interface IGDirectHashtagShareSheet : IGDirectShareSheet {

	IGHashtagModel* _hashtag;

}

@property (nonatomic,retain) IGHashtagModel * hashtag;              //@synthesize hashtag=_hashtag - In the implementation block
-(IGHashtagModel *)hashtag;
-(void)setHashtag:(IGHashtagModel *)arg1 ;
-(void)uploadCurrentContentToRecipient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

