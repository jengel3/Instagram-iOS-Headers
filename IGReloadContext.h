

@class NSDictionary;

@interface IGReloadContext : NSObject {

	char _enableTapToViewComments;
	int _feedLayout;
	NSDictionary* _feedItemAttributes;

}

@property (nonatomic,readonly) int feedLayout;                               //@synthesize feedLayout=_feedLayout - In the implementation block
@property (nonatomic,retain) NSDictionary * feedItemAttributes;              //@synthesize feedItemAttributes=_feedItemAttributes - In the implementation block
@property (assign,nonatomic) char enableTapToViewComments;                   //@synthesize enableTapToViewComments=_enableTapToViewComments - In the implementation block
+(id)contextWithLayout:(int)arg1 ;
-(char)enableTapToViewComments;
-(void)setEnableTapToViewComments:(char)arg1 ;
-(NSDictionary *)feedItemAttributes;
-(void)setFeedItemAttributes:(NSDictionary *)arg1 ;
-(int)feedLayout;
@end

