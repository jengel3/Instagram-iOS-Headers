
@class NSURL, FBSDKHashtag, NSArray, NSString;


@protocol FBSDKSharingContent <FBSDKCopying,NSSecureCoding>
@property (nonatomic,copy) NSURL * contentURL; 
@property (nonatomic,copy) FBSDKHashtag * hashtag; 
@property (nonatomic,copy) NSArray * peopleIDs; 
@property (nonatomic,copy) NSString * placeID; 
@property (nonatomic,copy) NSString * ref; 
@required
-(FBSDKHashtag *)hashtag;
-(void)setHashtag:(id)arg1;
-(NSArray *)peopleIDs;
-(void)setPeopleIDs:(id)arg1;
-(void)setContentURL:(id)arg1;
-(NSURL *)contentURL;
-(void)setPlaceID:(id)arg1;
-(NSString *)placeID;
-(NSString *)ref;
-(void)setRef:(id)arg1;

@end

