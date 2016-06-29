
#import <Instagram/IGDKDiffable.h>

@class NSString, IGFeedItem;

@interface IGChannelModel : NSObject <IGDKDiffable> {

	NSString* _channelId;
	NSString* _channelType;
	NSString* _header;
	NSString* _title;
	NSString* _context;
	IGFeedItem* _post;

}

@property (nonatomic,copy,readonly) NSString * channelId;                //@synthesize channelId=_channelId - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelType;              //@synthesize channelType=_channelType - In the implementation block
@property (nonatomic,copy,readonly) NSString * header;                   //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) IGFeedItem * post;                          //@synthesize post=_post - In the implementation block
-(id)diffIdentifier;
-(void)setPost:(IGFeedItem *)arg1 ;
-(IGFeedItem *)post;
-(NSString *)channelType;
-(id)initWithChannelId:(id)arg1 channelType:(id)arg2 header:(id)arg3 title:(id)arg4 context:(id)arg5 feedItem:(id)arg6 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)context;
-(NSString *)header;
-(NSString *)channelId;
@end

