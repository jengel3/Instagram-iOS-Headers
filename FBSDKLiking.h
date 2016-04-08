
@class NSString;


@protocol FBSDKLiking <NSObject>
@property (nonatomic,copy) NSString * objectID; 
@property (assign,nonatomic) unsigned objectType; 
@required
-(NSString *)objectID;
-(void)setObjectType:(unsigned)arg1;
-(unsigned)objectType;
-(void)setObjectID:(id)arg1;

@end

