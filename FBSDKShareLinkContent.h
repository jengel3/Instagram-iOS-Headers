
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKSharingContent.h>

@class NSURL, NSArray, NSString, NSDictionary;

@interface FBSDKShareLinkContent : NSObject <FBSDKSharingContent> {

	NSURL* _contentURL;
	NSArray* _peopleIDs;
	NSString* _placeID;
	NSString* _ref;
	NSDictionary* _feedParameters;
	NSString* _contentDescription;
	NSString* _contentTitle;
	NSURL* _imageURL;

}

@property (nonatomic,copy) NSDictionary * feedParameters;              //@synthesize feedParameters=_feedParameters - In the implementation block
@property (nonatomic,copy) NSString * contentDescription;              //@synthesize contentDescription=_contentDescription - In the implementation block
@property (nonatomic,copy) NSString * contentTitle;                    //@synthesize contentTitle=_contentTitle - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                           //@synthesize imageURL=_imageURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * contentURL;                         //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSArray * peopleIDs;                        //@synthesize peopleIDs=_peopleIDs - In the implementation block
@property (nonatomic,copy) NSString * placeID;                         //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,copy) NSString * ref;                             //@synthesize ref=_ref - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqualToShareLinkContent:(id)arg1 ;
-(NSDictionary *)feedParameters;
-(NSArray *)peopleIDs;
-(void)setPeopleIDs:(NSArray *)arg1 ;
-(void)setFeedParameters:(NSDictionary *)arg1 ;
-(void)setContentTitle:(NSString *)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSURL *)contentURL;
-(NSString *)contentTitle;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
-(void)setContentDescription:(NSString *)arg1 ;
-(NSString *)contentDescription;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

