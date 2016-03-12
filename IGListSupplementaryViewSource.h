

@protocol IGListSupplementaryViewSource <NSObject>
@required
-(id)supplementaryViewKindClasses;
-(id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(int)arg2;
-(CGSize*)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(int)arg2;
-(CGSize*)estimatedSizeForSupplementaryViewOfKind:(id)arg1 atIndex:(int)arg2;

@end

