
#import <Instagram/IGDKDiffable.h>

@class NSArray, NSString;

@interface IGChannelHomeRowItemModel : NSObject <IGDKDiffable> {

	NSArray* _channels;
	NSString* _pk;

}

@property (nonatomic,copy,readonly) NSArray * channels;              //@synthesize channels=_channels - In the implementation block
@property (nonatomic,copy,readonly) NSString * pk;                   //@synthesize pk=_pk - In the implementation block
-(NSString *)pk;
-(id)diffIdentifier;
-(id)initWithChannels:(id)arg1 ;
-(NSArray *)channels;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
@end

