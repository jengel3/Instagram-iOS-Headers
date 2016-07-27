

@protocol IGListSupplementaryViewSource <NSObject>
@required
-(id)supportedElementKinds;
-(id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(int)arg2;
-(CGSize*)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(int)arg2;

@end

