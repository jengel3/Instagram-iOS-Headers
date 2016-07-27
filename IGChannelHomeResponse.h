
#import <Instagram/IGLoadMoreResponseType.h>

@class NSString, NSArray;

@interface IGChannelHomeResponse : NSObject <IGLoadMoreResponseType> {

	NSString* _maxId;
	NSArray* _allChannels;

}

@property (nonatomic,copy,readonly) NSString * maxId;                   //@synthesize maxId=_maxId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allChannels;              //@synthesize allChannels=_allChannels - In the implementation block
-(NSString *)maxId;
-(id)initWithChannels:(id)arg1 maxId:(id)arg2 ;
-(NSArray *)allChannels;
@end

