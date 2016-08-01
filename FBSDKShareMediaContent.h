
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKSharingContent.h>

@class NSURL, FBSDKHashtag, NSArray, NSString;

@interface FBSDKShareMediaContent : NSObject <FBSDKSharingContent> {

	NSURL* _contentURL;
	FBSDKHashtag* _hashtag;
	NSArray* _peopleIDs;
	NSString* _placeID;
	NSString* _ref;
	NSArray* _media;

}

@property (nonatomic,copy) NSArray * media;                         //@synthesize media=_media - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * contentURL;                      //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) FBSDKHashtag * hashtag;                  //@synthesize hashtag=_hashtag - In the implementation block
@property (nonatomic,copy) NSArray * peopleIDs;                     //@synthesize peopleIDs=_peopleIDs - In the implementation block
@property (nonatomic,copy) NSString * placeID;                      //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,copy) NSString * ref;                          //@synthesize ref=_ref - In the implementation block
+(char)supportsSecureCoding;
-(FBSDKHashtag *)hashtag;
-(void)setHashtag:(FBSDKHashtag *)arg1 ;
-(NSArray *)peopleIDs;
-(void)setPeopleIDs:(NSArray *)arg1 ;
-(char)isEqualToShareMediaContent:(id)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSURL *)contentURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
-(NSArray *)media;
-(void)setMedia:(NSArray *)arg1 ;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
@end

