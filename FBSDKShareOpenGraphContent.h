
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKSharingContent.h>

@class NSURL, NSArray, NSString, FBSDKShareOpenGraphAction;

@interface FBSDKShareOpenGraphContent : NSObject <FBSDKSharingContent> {

	NSURL* _contentURL;
	NSArray* _peopleIDs;
	NSString* _placeID;
	NSString* _ref;
	FBSDKShareOpenGraphAction* _action;
	NSString* _previewPropertyName;

}

@property (nonatomic,copy) FBSDKShareOpenGraphAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * previewPropertyName;                  //@synthesize previewPropertyName=_previewPropertyName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * contentURL;                              //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSArray * peopleIDs;                             //@synthesize peopleIDs=_peopleIDs - In the implementation block
@property (nonatomic,copy) NSString * placeID;                              //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,copy) NSString * ref;                                  //@synthesize ref=_ref - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)previewPropertyName;
-(NSArray *)peopleIDs;
-(char)isEqualToShareOpenGraphContent:(id)arg1 ;
-(void)setPreviewPropertyName:(NSString *)arg1 ;
-(void)setPeopleIDs:(NSArray *)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSURL *)contentURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(FBSDKShareOpenGraphAction *)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(FBSDKShareOpenGraphAction *)arg1 ;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
@end

